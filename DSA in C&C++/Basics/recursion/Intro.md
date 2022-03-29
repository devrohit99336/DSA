# Recursion 

C language में, Recursion एक प्रक्रिया है जिसमें एक function अपने आप को बार-बार call करता है. इस function को recursive function कहते हैं.

इस प्रकार की function call को recursive calls कहा जाता है. Recursion में बहुत सारीं recursive calls होती है इसलिए इसको terminate करने के लिए terminate condition का प्रयोग करना आवश्यक होता है.

Recursion को हम सभी problems पर apply नहीं कर सकते परन्तु इसका प्रयोग करके हम कुछ problems को आसानी से solve कर सकते हैं. उदाहरण के लिए – हम इसका प्रयोग sorting, searching, traversal आदि problems को solve करने के लिए कर कर सकते हैं.

C प्रोग्रामिंग लैंग्वेज recursion को सपोर्ट करती है. परन्तु इसका प्रयोग करने के दौरान programmer को  function में exit condition को define करना आवश्यक होता है अन्यथा यह infinite loop तक चलता रहेगा.

Recursive functions बहुत सारीं mathematical problems को solve करने में बहुत उपयोगी होती है जैसे कि – एक number के factorial को calculate करना, fibonacci series को जनरेट करना आदि.

```diff
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```



Resource - 

1. [ehindistudy.com](https://ehindistudy.com/2021/02/10/recursion-in-c-in-hindi/)
2. [hindilearning.in](https://hindilearning.in/recursion-in-c-in-hindi/)