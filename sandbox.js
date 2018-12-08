// Sandbox
// (pretty-print tree from given text)

const text = `
(defn foo
  "hello, this is a docstring"
  [a b]
  (let [sum (+ a b)
        prod (* a b)]
     {:sum sum
      :prod prod}))
`;

const { partialSexp, fullSexp, printSexp } = require("highlight-tree-sitter");
const Parser = require("tree-sitter");
const Clojure = require("./index.js");
const parser = new Parser();
parser.setLanguage(Clojure);
const tree = parser.parse(text);
const partial = partialSexp(tree);
const full = fullSexp(text, tree);

console.log(`
======================================================================
Parsing text:
======================================================================
${text}

======================================================================
Partial Tree:
======================================================================
${printSexp(partial)}

======================================================================
Full Tree:
======================================================================
${printSexp(full)}
`);
