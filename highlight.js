const Parser = require('tree-sitter');
const Clojure = require('./index.js');

const parser = new Parser();
parser.setLanguage(Clojure);

const sourceCode = `
(defn foo
  "hello, this is a docstring"
  [a b]
  (let [sum (+ a b)
        prod (* a b)]
     {:sum sum
      :prod prod}))
`;
const tree = parser.parse(sourceCode);

// create a flat list of open and close tags
const tags = [];
function walk(node) {
  const { type, startIndex, endIndex, children } = node;
  tags.push(
    {type, i: startIndex, isOpen: true},
    {type, i: endIndex, isOpen: false}
  );
  children.forEach(walk);
}
walk(tree.rootNode);
tags.sort((a,b) => a.i - b.i);

// output html
let prevI = 0;
let html = "";
for (const { type, i, isOpen } of tags) {
  const prevText = sourceCode.slice(prevI, i);
  const tag = isOpen ? `<span class="${type}">` : "</span>";
  html += prevText + tag;
  prevI = i;
}
html = `<pre>${html}</pre>`;
console.log(html);
