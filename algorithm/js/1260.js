const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "ex.txt";
const input = require("fs")
  .readFileSync(filePath)
  .toString()
  .trim()
  .split("\n");
const [N, M, V] = input.shift().split(" ").map(Number);
const edges = input.map((v) => v.split(" ").map(Number));
const graph = [...Array(N + 1)].map(() => []);
edges.forEach(([from, to]) => {
  graph[from].push(to);
  graph[to].push(from);
});
graph.forEach((v) => v.sort((a, b) => b - a));
console.log(N, M, V, graph);
