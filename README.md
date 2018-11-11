# tree-sitter-clojure

This repo contains a [tree-sitter] grammar for [Clojure] and [ClojureScript].

## Design Considerations

- Clojure, ClojureScript, and `.cljc` as first class citizens
- When in doubt, be more specific

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

[tree-sitter]:https://tree-sitter.github.io/tree-sitter/
[Clojure]:https://clojure.org/
[ClojureScript]:https://clojurescript.org/
[Node.js]:https://nodejs.org/
[npm]:https://www.npmjs.com/get-npm
