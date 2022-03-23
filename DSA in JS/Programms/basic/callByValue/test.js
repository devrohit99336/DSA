var num = 10;
var obj1 = {item: "unchanged"};
var obj2 = {item: "unchanged"};

changeStuff(num, obj1, obj2);

function changeStuff(a, b, c)
{
  a = a * 10;
  console.log(`\nvalue num in method : ${a}`)
  
  b.item = "changed";
  c = {item: "changed"};
}

console.log(num);
console.log(obj1.item);
console.log(obj2.item);