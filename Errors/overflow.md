# Buffer Overflow

### सभी programming languages में डाटा टाइप का size तथा length पहले से Deside  रहता है | इन data type के variables में इनके size व length से ज्यादा data insert करने पर ये overflow कर जाते है और *buffer overflow* या *overflow* का error आता है | 

### जब कोई program या प्रोसेस, buffer में उसकी fixed length से अधिक data को write करने की कोशिश करता है तॊ extra data overflow कर जाते है और buffer overflow या overflow का error आता है | 

### यह एक vulnerability है जिससे system crash हो सकता है. तथा इससे attacker सिस्टम के internal variables को modify कर सकता है.

<br>
<p>data types की range, size और format specifiers -</p>
<div class="table-responsive">
<table class="table table-bordered table-striped table-sm text-center">
<caption class="text-center">Primitive Data Types</caption>
<thead class="thead-dark">
<tr>
<th>Type</th>
<th>Size (bytes)</th>
<th>Range</th>
<th>F. S.</th>
</tr>
</thead>
<tbody>
<tr>
<td>int</td>
<td>4</td>
<td>-2,147,483,648 to 2,147,483,647</td>
<td>%d</td>
</tr>
<tr>
<td>unsigned int</td>
<td>4</td>
<td>0 to 4,294,967,295</td>
<td>%u</td>
</tr>
<tr>
<td>short</td>
<td>2</td>
<td>-32,768 to 32,767</td>
<td>%d</td>
</tr>
<tr>
<td>unsigned short</td>
<td>2</td>
<td>0 to 65,535</td>
<td>%u</td>
</tr>
<tr>
<td>long</td>
<td>4</td>
<td>-2,147,483,648 to 2,147,483,647</td>
<td>%d</td>
</tr>
<tr>
<td>unsigned long</td>
<td>4</td>
<td>0 to 4,294,967,295</td>
<td>%u</td>
</tr>
<tr>
<td>char</td>
<td>1</td>
<td>-128 to 127</td>
<td>%c</td>
</tr>
<tr>
<td>unsigned char</td>
<td>1</td>
<td>0 to 255</td>
<td>%c</td>
</tr>
<tr>
<td>float</td>
<td>4</td>
<td>1.2E-38 to 3.4E+38 (6 decimal places)</td>
<td>%f</td>
</tr>
<tr>
<td>double</td>
<td>8</td>
<td>2.3E-308 to 1.7E+308 (15 decimal places)</td>
<td>%lf</td>
</tr>
<tr>
<td>long double</td>
<td>10</td>
<td>3.4E-4932 to 1.1E+4932 (19 decimal places)</td>
<td>%Lf</td>
</tr>
</tbody>
</table>
