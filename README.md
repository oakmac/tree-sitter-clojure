# tree-sitter-clojure [![Build Status](https://travis-ci.org/oakmac/tree-sitter-clojure.svg?branch=master)](https://travis-ci.org/oakmac/tree-sitter-clojure)

This repo contains a [tree-sitter] grammar for [Clojure] and [ClojureScript].

[tree-sitter]:https://tree-sitter.github.io/tree-sitter/
[Clojure]:https://clojure.org/
[ClojureScript]:https://clojurescript.org/

## About

[Tree-sitter] is an ambitious new library for language syntax highlighting being
used by the [Atom] editor and GitHub.com. Tree-sitter uses language grammars
instead of regular expressions and supports fast updates as the user is typing
(similar to many persistent data structure operations in Clojure).

You can read more about tree-sitter on [the website].

[Tree-sitter]:https://github.com/tree-sitter/tree-sitter
[Atom]:https://atom.io/
[the website]:http://tree-sitter.github.io/tree-sitter/

## Design Considerations

- Clojure, ClojureScript, and `.cljc` as first class citizens
- When in doubt, be more specific
  - we may put more information than strictly required into the AST
  - this gives editors / integrations the option to highlight what they want

## FAQ

#### Is tree-sitter-clojure only for Atom?

No. Tree-sitter is open source and has bindings to C, so it can be used in many
environments.

#### How can I use this project with my _<favorite editor>_?

Unfortunately, there is not a "one size fits all" solution here.

Every integration will be different, depending largely on how the target
environment / tool supports syntax highlighting, extensions, etc. Please see the
documentation for your editor and the [tree-sitter source] for more information.

[tree-sitter source]:https://github.com/tree-sitter/tree-sitter

## Development

Make sure [Node.js] and [npm] are installed, then from the command line:

```sh
# first-time install step:
# > creates the node_modules folder
# > builds tree-sitter
npm install

# build the grammar
npm run build

# test the corpus
npm run test
```

Please see the ["installing the tools"] section on the tree-sitter website for
more information.

["installing the tools"]:https://tree-sitter.github.io/tree-sitter/creating-parsers#installing-the-tools).

## License

[MIT](LICENSE.md)

[Node.js]:https://nodejs.org/
[npm]:https://www.npmjs.com/get-npm
