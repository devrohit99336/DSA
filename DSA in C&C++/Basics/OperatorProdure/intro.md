<p>हम सभी ने math में BODMAS rule तो पढ़ा ही हॆ जिसका use करके हम expression (e.g.&nbsp; 12 + 5 x 13 / 2 &#8211; 1)
    को solve करते वक्त operations order decide करते हैं.</p>
    <p>ठीक इसी तरह C programming में भी expression को evaluate करते वक्त operator precedence and associativity के rules
        को follow करना पड़ता है.</p>
    <h2><strong>Operator Precedence in C Language</strong></h2>
    <p>जब किसी expression में एक से ज्यादा operators use होते हैं तब operator precedence के द्वारा सभी operators को
        priorities दी जाती है.</p>
    <p>Operators priorities के आधार पर ही ये तय किया जाता है की expression को evaluate करते वक्त किस operator को पहले
        solve किया जाएगा. आइए example के साथ समझते हैं.</p>
    <pre class="wp-block-preformatted">2 + 5 * 3 = 7 * 3 = 21 (wrong)
2 + 5 * 3 = 2 + 15 = 17 (right)</pre>
    <p>अगर हम&nbsp; operator precedence के rules को बिना follow करें expression को solve करेंगे तो हमारा output भी ऊपर
        दिए first example की तरह गलत ही आएगा.</p>
    <p>क्योंकि C language में multiply ( * ) की operator precedence addition ( + ) की operator precedence से ज्यादा होती
        है.</p>
    <p>इसलिए पहले 5 * 3 को evaluted किया जाएगा उसके बाद उसमे 2 को add किया जाएगा तब जाकर हमको second example की तरह सही
        output मिलेगा. आइए एक और example समझते हैं.</p>
    <pre class="wp-block-preformatted">(2 + 5) * 3 = 7 * 3 = 21</pre>
    <p>ऊपर वाले expression में हमने 2 + 5 को parentheses ( ) के अंदर रख दिया और parentheses की operator precedence *
        operator से ज्यादा होती है.&nbsp;</p>
    <p>इसलिए पहले 2 + 5 को evaluted किया जाएगा उसके बाद उसमे 3 को multiply किया जाएगा तब जाकर हमको सही output मिलेगा.
    </p>
    <h2><strong>Operator Associativity in C Language</strong></h2>
    <p>जब किसी expression में same precedence वाले एक से ज्यादा operators use होते हैं तब operator associativity के
        द्वारा उन operators को evaluate करने का order (left to right or right to left) तय किया जाता है. आइए example के
        साथ समझते हैं.</p>
    <pre>
    int d = 3 * 8 / 2; // 12 => 8/2 = 4, 4*3 = 12
    int e = 32 / 8 * 2; // 8 => 32/8 = 4, 4*2 = 8
    </pre>
    <p>ऊपर वाले expression में * और&nbsp; / की operator precedence (priority) same होती है इसलिए अब यहाँ हम इन operators
        की associativity देखकर इस&nbsp; expression को solve करेंगे.&nbsp;</p>
    <p>नीचे दी गयी table में C operator precedence and associativity की list दी है जिसे हम ध्यानपूर्वक देखें और याद
        रखें.</p>
    <h2><strong>Operator Precedence and Associativity Table in C Programming</strong></h2>
    <div class="table-responsive">
        <table border="1" cellpadding="0" cellspacing="0">
        <tbody>
            <tr>
                <td valign="top" width="289"><b>Description</b></td>
                <td valign="top" width="102"><b>Operator</b></td>
                <td valign="top" width="120"><b>Associativity</b></td>
            </tr>
            <tr>
                <td valign="top" width="289">Function expression</td>
                <td valign="top" width="102">
                    <div align="center">
                        ( )</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Array Expression</td>
                <td valign="top" width="102">
                    <div align="center">
                        []</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Structure operators</td>
                <td valign="top" width="102">
                    <div align="center">
                        -&gt;</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Unary minus</td>
                <td valign="top" width="102">
                    <div align="center">
                        &#8211;</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">Increment &amp; Decrement</td>
                <td valign="top" width="102">
                    <div align="center">
                        &#8212;&nbsp; ++</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">One&#8217;s compliment</td>
                <td valign="top" width="102">
                    <div align="center">
                        ~</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">Pointer Operators</td>
                <td valign="top" width="102">
                    <div align="center">
                        &amp; *</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">Type cast</td>
                <td valign="top" width="102">
                    <div align="center">
                        (data type)</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">size of operator</td>
                <td valign="top" width="102">
                    <div align="center">
                        sizeof</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">Left and Right Shift</td>
                <td valign="top" width="102">
                    <div align="center">
                        &gt;&gt;&nbsp; &lt;&lt;</div>
                </td>
                <td valign="top" width="120"><br /></td>
            </tr>
        </tbody>
    </table>
    <h4 style="text-align: left;">
        <b>&nbsp;</b></h4>
    <h3><b>Arithmetic Operators</b></h3>
    <table border="1" cellpadding="0" cellspacing="0">
        <tbody>
            <tr>
                <td valign="top" width="289">Multiplication operator,&nbsp;Divide by,&nbsp;Modulus</td>
                <td valign="top" width="102">
                    <div align="center">
                        *, &nbsp;/, &nbsp;%</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Add,&nbsp;Substract</td>
                <td valign="top" width="102">
                    <div align="center">
                        +, &nbsp;&#8211;</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
        </tbody>
    </table>
    <h3><b>Relational Operators</b></h3>
    <table border="1" cellpadding="0" cellspacing="0">
        <tbody>
            <tr>
                <td valign="top" width="289">Less Than</td>
                <td valign="top" width="102">
                    <div align="center">
                        &lt;</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Greater than</td>
                <td valign="top" width="102">
                    <div align="center">
                        &gt;</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Less than equal to</td>
                <td valign="top" width="102">
                    <div align="center">
                        &lt;=</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Greater than equal to</td>
                <td valign="top" width="102">
                    <div align="center">
                        &gt;=</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Equal to</td>
                <td valign="top" width="102">
                    <div align="center">
                        ==</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">Not equal</td>
                <td valign="top" width="102">
                    <div align="center">
                        !=</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
        </tbody>
    </table>
    <h3 style="text-align: left;">
        <b align="center">Logical Operators</b></h3>
    <table border="1" cellpadding="0" cellspacing="0">
        <tbody>
            <tr>
                <td valign="top" width="289">AND</td>
                <td valign="top" width="102">
                    <div align="center">
                        &amp;&amp;</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">OR</td>
                <td valign="top" width="102">
                    <div align="center">
                        ||</div>
                </td>
                <td valign="top" width="120">Left to Right</td>
            </tr>
            <tr>
                <td valign="top" width="289">NOT</td>
                <td valign="top" width="102">
                    <div align="center">
                        !</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
        </tbody>
    </table>
        <h3><b>Bitwise Operators</b></h3>
    <table border="1" cellpadding="0" cellspacing="0">
        <tbody>
            <tr>
                <td></td>
                <td valign="top" width="102">
                    <div align="center">
                        =</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        *=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        /=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        %=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        +=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        -=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        &amp;=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        ^=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        |=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        &lt;&lt;=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289"><br /></td>
                <td valign="top" width="102">
                    <div align="center">
                        &gt;&gt;=</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
        </tbody>
    </table>
    <h3> <b>Other Operators</b></h3>
    <table border="1" cellpadding="0" cellspacing="0">
        <tbody>
            <tr>
                <td valign="top" width="289">Comma</td>
                <td valign="top" width="102">
                    <div align="center">
                        ,</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
            <tr>
                <td valign="top" width="289">Conditional Operator</td>
                <td valign="top" width="102">
                    <div align="center">
                        ?:</div>
                </td>
                <td valign="top" width="120">Right to Left</td>
            </tr>
        </tbody>
    </table>


Example -

```diff

#include <stdio.h>

int main(){
    printf("\n welcome rohit \n \n");
    //BODMAS bracket of division multiplication addition subtraction
    /*** 
     * BODMAS rule -
     * B = Bracket ()
     * O = Of (noting)
     * D = Division (/)
     * M = Multiplication(*)
     * A = Addition(+)
     * S = Subtraction(-)
    */

    int a = 2 + 5 * 3; //17 => 5*3 = 15, 15+2 =17
    int b = (2 + 5) * 3; //21 => 5+2 = 7, 7*3 = 21
    int c = 5 * 3 + 8 / 2; // 19 => 8/2 = 4, 5*3 = 15, 15+4 = 19
    printf("value of a:%d \n",a);
    printf("value of b:%d \n",b);
    printf("value of c:%d \n",c);
}

```