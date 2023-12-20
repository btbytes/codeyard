// From https://twitter.com/deno_land/status/1737482799811031066
// 2023-12-21


// import * as $ from "npm:cheerio" // for Deno
import * as $ from "cheerio" // for bun
// for bun you have to do `bun add cheerio` before running this script.

const r = await fetch("https://news.ycombinator.com")

const html = await r.text()

const $hn = $.load(html)

const $topStory = $hn("span.titleline:first a")

console.log($topStory.text())
console.log($topStory.attr("href"))


