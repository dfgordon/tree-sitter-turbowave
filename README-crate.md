Parser for turboWAVE
====================

This is the rust binding for [tree-sitter-turbowave](https://github.com/dfgordon/tree-sitter-turbowave).  To use the parser, include the following in your package's `Cargo.toml`:
```toml
[dependencies]
tree-sitter = "~0.20.6"
tree-sitter-turbowave = "~1.7.1"
```
Here is a trivial `main.rs` example:
```rust
use tree_sitter;
use tree_sitter_turbowave;

fn main() {
    let code = "timestep = 1\n";
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_turbowave::language())
      .expect("Error loading grammar");
    let tree = parser.parse(code,None).unwrap();

    println!("{}",tree.root_node().to_sexp());
}
```
This should print the syntax tree
```
(input_file (assignment (obj_key (identifier)) (decimal)))
```
For more on parsing with rust, see the general guidance [here](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_rust/README.md).