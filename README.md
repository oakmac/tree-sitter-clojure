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
- When in doubt, be more specific:
  - editors can determine what to highlight

## FAQ

#### Is tree-sitter only for Atom?

No. Tree-sitter is open source and has bindings to C, so it

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

## License

[MIT](LICENSE.md)

[Node.js]:https://nodejs.org/
[npm]:https://www.npmjs.com/get-npm
