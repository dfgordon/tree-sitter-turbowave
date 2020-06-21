This package provides a parser for [turboWAVE](https://github.com/USNavalResearchLaboratory/turboWAVE) input files.  It enables the following:

- Syntax highlights for the Atom editor
- Python chemistry codes that want to utilize the SPARC database
- Python tools for turboWAVE that need to parse the input file
- Eventually the native turboWAVE parser may be replaced by tree-sitter parsing

While our emphasis is C++ and Python, the parser can be called from several languages. Details can be found in the [tree sitter documentation](https://tree-sitter.github.io/tree-sitter/#language-bindings).

# Using the Parser

1. If Node.js is not already installed, install it.

2. Navigate to the directory for your project

2. Install the parser library in your project directory using `npm install tree-sitter-turbowave`

3. If this is a Python project activate your environment and run `pip install tree-sitter`

## Sample Python Parsing script

The following code simply prints the types of the top level nodes of the syntax tree.  The name of a turboWAVE input file is the only argument.

	import sys
	from tree_sitter import Language, Parser

	if len(sys.argv)!=2:
	    raise ValueError('Please provide one argument, the file to parse.')

	Language.build_library('language-turbowave.so',['node_modules/tree-sitter-turbowave'])
	twlang = Language('./language-turbowave.so','turbowave')

	parser = Parser()
	parser.set_language(twlang)

	with open(sys.argv[1]) as f:
	    code = f.read()

	tree = parser.parse(bytes(code,"utf8"))

	for child in tree.root_node.children:
	    print(child.type)

# Sample turboWAVE input File

This is a SPARC database file with bare bones argon plasma chemistry.

	new chemical e
	{
		charge = -1.0
		mass = 1.0
		cv = 1.5
	}

	new group heavies
	{
		new chemical Ar
		{
			charge = 0.0
			mass = 73440
			cv = 1.5
			thermometric conductivity = %1cm2s
		}
		new chemical Ar[+]
		{
			charge = 1.0
			mass = 73439
			cv = 1.5
			thermometric conductivity = %1cm2s
		}
		new chemical Ar2[+]
		{
			charge = 1.0
			mass = 146879
			cv = 2.5
			thermometric conductivity = %1cm2s
		}
		mobile = true
	}

	new collision = e <-> Ar[+] , coulomb
	new collision = e <-> Ar , cross section = 1e-16 // appropriate for 1 eV
	new collision = e <-> Ar2[+] , coulomb

	// detailed balanced impact ionization and 3-body recombination
	new reaction = { Ar -> Ar[+] : e -> e + e - 15.76 } rate = 5.33e-5 -3.0 15.76 e(:)
	new reaction = { Ar[+] + e + e -> Ar + e + 15.76 } rate = 8.75e-27 -4.5 0.0 e(:)

	// radiative recombination, photon is assumed to leave system
	new reaction = { Ar[+] + e -> Ar } rate = 2.7e-13 -0.5 0.0 e(:)

	// molecular argon
	new reaction = { Ar[+] + Ar + Ar -> Ar2[+] + Ar + 2.61 } rate = 2.55e-31 0.0 0.0 e(:)
	new reaction = { Ar2[+] + e -> Ar + Ar + 13.15 } rate = 5.4e-8 -0.667 0.0 e(:)
