# TurboWAVE Parser

This package provides a parser for [turboWAVE](https://github.com/USNavalResearchLaboratory/turboWAVE) input files.  It enables the following:

- Language services for certain editors
- Python chemistry codes that want to utilize the SPARC database
- Python tools for turboWAVE that need to parse the input file
- Eventually the native turboWAVE parser may be replaced by tree-sitter parsing

While our emphasis is C++ and Python, the parser can be called from several languages. Details can be found in the [tree sitter documentation](https://tree-sitter.github.io/tree-sitter/#language-bindings).

# Parsing with Python

## Build the library

1. Clone the `tree-sitter-turbowave` repository

2. Activate your Python environment and run `pip install tree-sitter`

3. Enter your project directory and run the following Python program

```py
from tree_sitter import Language
Language.build_library('languages.so',['path/to/tree-sitter-turbowave'])
```

Once you have `languages.so` you can delete the local `tree-sitter-turbowave` repository if you wish.

## Sample Python Parsing Script

The following code takes an input file path as the argument, and prints the top level node types.  Note this code assumes `languages.so` is in the working directory.

```py
import sys
from tree_sitter import Language, Parser

if len(sys.argv)!=2:
	raise ValueError('Please provide one argument, the file to parse.')

twlang = Language('languages.so','turbowave')
parser = Parser()
parser.set_language(twlang)

with open(sys.argv[1]) as f:
	code = f.read()

tree = parser.parse(bytes(code,"utf8"))

for child in tree.root_node.children:
	print(child.type)
```

## Sample turboWAVE Input File

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
