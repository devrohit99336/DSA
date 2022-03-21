
<h4>
Definition of Asymptotic Notations in Hindi:- असिम्प्टोटिक नोटेशन का उपयोग एल्गोरिथ्म (algorithm) की जटिलता
(complexity) को दर्शाने के लिए किया जाता है।

किसी एल्गोरिदम में मुख्य रूप से दो प्रकार की complexity होती है। Space और Time complexity.
</h4>
<ul>
    <li>
        Space complexity एल्गोरिदम द्वारा कंप्यूटर के मेमोरी में लिया जाये space या जगह को प्रदर्शित करता है।
    </li>
    <li>
        Time complexity एल्गोरिदम द्वारा लिए जाने वाले टाइम या समय को प्रदर्शित करता है।
    </li>
</ul>

<p>
    Asymptotic Notations एल्गोरिदम में input के आकार (size) में किये जाने वाले वृद्धि के अनुसार एल्गोरिथ्म द्वारा
    लिए जाने वाले समय (time) का विश्लेषण करके उन्हें विशेष संकेतों के माध्यम से दर्शाता है। आमतौर पर input के अनुसार
    एल्गोरिथ्म द्वारा लिया जाने वाला समय निम्नलिखित तीन में से किसी एक परिस्थिति को दर्शाता है।
</p>

<ul>
    <li>
        Best Case:- यह ऐसी परिस्थिति है, जिसमें एल्गोरिदम को सबसे कम समय या स्थान की आवश्यकता होती है।
    </li>
    <li>
        Worst Case:- यह ऐसी परिस्थिति है, जिसमें एल्गोरिदम को सबसे लंबा समय या ज़्यदा स्थान की आवश्यकता होती है।
    </li>
    <li>
        Average Case:- यह ऐसी परिस्थिति है, जिसमें एल्गोरिदम को औसत समय या स्थान की आवश्यकता होती है। यह Best और
        Worst Case के बीच की स्थिति होती है।
    </li>
</ul>



<h1>Types of Asymptotic Notation in Hindi</h1> </a>
<div class="lwptoc_itemWrap">
    <div> <a href="#Importance_of_Asymptotic_Notation_in_Hindi"> <span class="lwptoc_item_number">1.1</span>
            <span>Importance of Asymptotic Notation in Hindi</span> </a>
        <div class="lwptoc_itemWrap">
            <div> <a href="#Limitations_of_Asymptotic_Notation_in_Hindi"> <span
                        class="lwptoc_item_number">1.1.1</span> <span>Limitations of Asymptotic Notation in
                        Hindi</span> </a></div>
        </div>
    </div>
</div>

<h2 style="text-align: center;"><span id="Types_of_Asymptotic_Notation_in_Hindi"><span style="color: #ff0000;">Types
            of Asymptotic Notation in Hindi</span></span></h2>
<p>Types of Asymptotic Notation in Hindi:- किसी एल्गोरिथ्म में चल रहे समय की जटिलता का गणना करके उन्हें असिम्प्टोटिक
    नोटेशन के उपयोग से दर्शाने के लिए निम्नलिखित तीन प्रकार के Notation का उपयोग किया जाता है।</p>
<ul>
    <li>Big Oh Notation (O) :- बिग ओ नोटेशन का उपयोग worst case को दर्शाने के लिए किया जाता है, मतलब की ऐसी स्थिति
        जिसमें किसी इनपुट के लिए एल्गोरिदम सबसे ज्यादा Time और Space लेता है या ऐसा भी कह सकते हैं कि यह एल्गोरिथ्म
        मे के सबसे उच्चतम समय सीमा को दर्शाता है।</li>
    <li>Big Theta Notation (Θ) :- इसे Ω (ओमेगा) के संकेत से दर्शाया जाता है। यह किसी algorithm के Best Case को मतलब
        की ऐसी स्थिति जिसमें किसी इनपुट के लिए एल्गोरिदम सबसे कम Time और Space लेता है या ऐसा भी कह सकते हैं कि यह
        एल्गोरिथ्म मे के सबसे न्यूनतम या minimum समय सीमा को दर्शाता है।</li>
    <li>Big Omega Notation (Ω) :- इसे Θ (थीटा) के संकेत से दर्शाया जाता है। यह किसी एल्गोरिथ्म के Average Case को
        प्रदर्शित करता है, मतलब की ऐसी स्थिति जिसमें किसी इनपुट के लिए एल्गोरिदम Best और Worst Case के बीच का औसत
        समय लेता है।</li>
</ul>
<p><span style="color: #ff0000;"><strong>Example of Asymptotic Notation in Hindi:-</strong></span></p>
<p>असिम्प्टोटिक नोटेशन के माध्यम से सबसे अच्छा एल्गोरिथ्म उसे माना जायेगा जो दिए गए समस्या के लिए बेहतर Time
    Complicity और Space Complicity का उपयोग करके सबसे बेहतर समाधान उपलब्ध करवा सकें। उदाहरण के लिए मान लीजिए कि अगर
    कुछ संख्याओं को छोटे से बड़े के क्रम में क्रमबद्ध करना है, तो इसके लिए विभिन्न sorting algorithms जैसे की
    Selection Sort, Bubble Sort, Merge Sort, Quick Sort में से सबसे बेहतर एल्गोरिथम का चुनाव Asymptotic Notations के
    माध्यम से किया जा सकता है। जो एल्गोरिथ्म सबसे कम समय और मेमोरी स्पेस का उपयोग करते हुए सभी संख्याओं को छोटे से
    बड़े के क्रम में क्रमबद्ध करने में समर्थ होगा उसका चुनाव Programmer को Software बनाने के लिए करना चाहिए।<br>
    <script async src="https://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script><br> <br> <ins
        class="adsbygoogle" style="display:block" data-ad-client="ca-pub-2652779229543242" data-ad-slot="1443554041"
        data-ad-format="auto" data-full-width-responsive="true"></ins><br>
    <script>
        (adsbygoogle = window.adsbygoogle || []).push({});
    </script>
</p>
<h3 style="text-align: center;"><span id="Importance_of_Asymptotic_Notation_in_Hindi"><span
            style="color: #ff0000;">Importance of Asymptotic Notation in Hindi</span></span></h3>
<ul>
    <li>ये एल्गोरिथ्म की दक्षता का सरलता से वर्णन देते हैं।</li>
    <li>वे विभिन्न एल्गोरिदम के प्रदर्शन का सरलता से तुलना करने की सुबिधा प्रदान करता हैं। इसके उपयोग से कंप्यूटर
        प्रोग्रामर किसी समस्या के समाधान के लिए विभिन्न एल्गोरिदम के बीच से एक योग्य एल्गोरिथ्म का चुनाव करता है, जो
        कम से कम समय और मेमोरी space का उपयोग कर के किसी समस्या का समाधान उपलब्ध कराये।</li>
    <li>ऐसिम्प्टोटिक नोटेशन mathematical equations (गणितीय समीकरण) के रूप में एल्गोरिदम की जटिलता का प्रतिनिधित्व
        करते हैं , जिसके कारण विश्लेषण करके सही एल्गोरिथ्म का चुनाव करना काफ़ी आसान हो जाता है।</li>
    <li>ये पूरी तरह से machine independent होते है मतलब की मशीन या कंप्यूटर hardware में होने वाले बदलावों का इस पर
        कोई प्रभाव नहीं पड़ता।</li>
    <li>इसका उपयोग एल्गोरिथ्म डिजाइन के साथ ही computer science के कई अन्य लोकप्रिय क्षेत्र जैसे की कंप्यूटर
        नेटवर्क, ऑपरेटिंग सिस्टम, आर्टिफीसियल इंटेलिजेंसी, मशीन लर्निंग जैसे महत्वपूर्ण कामों को करने के लिए भी किया
        जाता है।</li>
    <li>यह अलग-अलग प्रकार के इनपुट के अनुसार एल्गोरिथ्म के काम करने की गति का विश्लेषण करने में मदद करता है। कई बार
        कुछ एल्गोरिथ्म इनपुट आकार बढ़ने पर अचानक अविश्वसनीय रूप से धीमा हो जाता है, ऐसे परिस्थितियों में
        असिम्प्टोटिक नोटेशन सही एल्गोरिथ्म का चुनाव करने भी मददगार होता है।</li>
</ul>
<h4 style="text-align: center;"><span id="Limitations_of_Asymptotic_Notation_in_Hindi"><span
            style="color: #ff0000;">Limitations of Asymptotic Notation in Hindi</span></span></h4>
<ul>
    <li>कुछ एल्गोरिदम इतना जटिल होते हैं, कि गणितीय तौर पर उनका विश्लेषण करके किसी संकेत के माध्यम से प्रदर्शित करना
        बहुत कठिन हो जाता है।</li>
    <li>Asymptotic विश्लेषण कई महत्वपूर्ण “विवरणों” जैसे की memory layout, memory cache hierarchy आदि के बारे में
        कुछ भी नहीं कहता।</li>
    <li>ऐसा जरुरी नहीं है की जिन एल्गोरिदम का जटिलता अच्छा होगा उनके लिए प्रोग्राम का source code भी आसानी से लिखा
        जा सकता है। कई बार ऐसा देखा जाता है की बेहतर complexity वाले एल्गोरिदम के लिए सोर्स कोड लिखना अधिक कठिन हो
        जाता है और इसमें सॉफ्टवेयर इंजीनियर का बहुत अधिक समय बर्बाद होता है।</li>
    <li>आमतौर पर ऐसिम्प्टोटिक नोटेशन के मदद से एल्गोरिदम का विश्लेषण करते समय छोटे आकार के इनपुट को अनदेखा कर दिया
        जाता है और केवल बड़े आकार के इनपुट पर ध्यान दिया जाता है लेकिन कई बार ऐसा भी देखा गया है की छोटे आकर का इनपुट
        ही एल्गोरिदम के running time पर हावी हो जाती है।</li>
</ul>


Refrence : -[developerinsider.co](https://developerinsider.co/big-o-notation-explained-with-examples/)
