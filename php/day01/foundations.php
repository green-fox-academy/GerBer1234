<?php
echo "HelloMe--------------------------------------------------------------------------------------<br>";
echo "Hello Greg<br>";
echo "<br>HumptyDumpty-----------------------------------------------------------------------------<br>";
print "Humpty Dumpty sat on a wall,<br>";
print "Humpty Dumpty had a great fall.<br>";
print "All the king's horses and all the king's men<br>";
print "Couldn't put Humpty together again.<br>";
echo "<br>HelloOthers------------------------------------------------------------------------------<br>";
echo "Hello Bea<br>";
print "Hello Peter<br>";
echo "Hello Dodo<br>";
echo "<br>IntroduceYourself------------------------------------------------------------------------<br>";
echo "Greg<br>";
echo "37<br>";
echo "1.86<br>";
echo "<br>TwoNumbers-------------------------------------------------------------------------------<br>";
echo (22+13),"<br>";
echo (22-13),"<br>";
echo (22*13),"<br>";
echo (22/13),"<br>";
echo floor(22/13),"<br>";
echo (22%13),"<br>";
echo "<br>CodingHours------------------------------------------------------------------------------<br>";
print (5*17*6)."<br>";
print ((5*17*6)/(17*52)*100)."%<br>";
echo "<br>FavoriteNumber---------------------------------------------------------------------------<br>";
$number = 23;
echo "My favorite number is: {$number}<br>";
echo "<br>Swap-------------------------------------------------------------------------------------<br>";
$a = 123;
$b = 526;
echo "Before swap a={$a}, b={$b}<br>";
$temp = 0;
$temp = $a;
$a = $b;
$b = $temp;
echo "After swap a={$a}, b={$b}<br>";
echo "<br>Bmi--------------------------------------------------------------------------------------<br>";
$massInKg = 81.2;
$heightInM = 1.78;
$bmi = $massInKg/pow($heightInM,2);
echo "The body mass index is {$bmi}<br>";
echo "<br>DefineBasicInfo--------------------------------------------------------------------------<br>";
$name ="Greg";
$age = "37";
$height = "1.86";
$married = FALSE;
echo "My name is {$name}<br>";
echo "I am {$age} years old<br>";
echo "My height is {$height}m<br>";
echo "Am I married (0 = no, 1 = yes)? ";
printf("%d<br>",$married);
echo "<br>VariableMutation-------------------------------------------------------------------------<br>";
$a = 3;
echo $a+3,"<br>";
$b = 100;
echo $b-7,"<br>";
$c = 44;
echo $c*2,"<br>";
$d = 125;
echo $d/5,"<br>";
$e = 8;
echo pow($e,3),"<br>";
echo "From now, 1 mean TRUE, 0 mean FALSE.<br>";
$f1 = 123;
$f2 = 345;
printf("$f1 is bigger than $f2: %d<br>",$f1>$f2);
$g1 = 350;
$g2 = 200;
printf("The double of $g2 is higher than $g1: %d<br>",$g1<$g2*2);
$h = 135798745;
printf("$h divisible by 11: %d<br>",$h%11==0);
$i1 = 10;
$i2 = 3;
printf("$i1 is higher than squared $i2: %d, $i1 is smaller than cubed $i2: %d<br>",$i1>pow($i2,2),$i1<pow($i2,3));
$j = 1521;
printf("$j is dividable with 3 or 5: %d<br>",$j%3||$j%5);
echo "<br>Cuboid-----------------------------------------------------------------------------------<br>";
$a = 10.6;
$b = 7.3;
$c = 5.2;
echo "Volume: ",$a*$b*$c,"<br>";
echo "Surface: ",$a*$b+$a*$c+$b*$c,"<br>";
echo "<br>SecondsInADay----------------------------------------------------------------------------<br>";
$currentHours = 14;
$currentMinutes = 34;
$currentSeconds = 42;
echo (24*60*60)-($currentHours*60*60+$currentMinutes*60+$currentSeconds)," seconds left from that day.<br>";
echo "<br>HelloUser--------------------------------------------------------------------------------<br>";
if(isset($_GET["name"])) {
  $name=$_GET["name"];
  echo "Hello ",$name,"<br>";
} else {
?>
<form>
  Your name is:
  <input type="text" name="name">
  <input type="submit" value="Ready">
</form>
<?php
}
echo "<br>MileToKmConverter------------------------------------------------------------------------<br>";
if(isset($_GET["mile"])) {
  $mile=$_GET["mile"];
  printf("Are you crazy? It's %.2f  kilometer(s)!!!<br>",$mile*1.609344);
} else {
?>
<form>
  How many miles do you want to run today:
  <input type="text" name="mile">
  <input type="submit" value="Ready">
</form>
<?php
}
echo "<br>AnimalsAndLegs---------------------------------------------------------------------------<br>";
if(isset($_GET["chicken"]) && isset($_GET["pigs"])) {
  $chicken = $_GET["chicken"];
  $pigs = $_GET["pigs"];
  echo "Your animals have ",($chicken*2+$pigs*4)," legs all together.<br>";
} else {
?>
<form>
  Chickens
  <input type="text" name="chicken">
  Pigs
  <input type="text" name="pigs">
  <input type="submit" value="Ready">
  <br>
</form>
<?php
}
echo "<br>AverageOfInput---------------------------------------------------------------------------<br>";
if(isset($_GET["numbers1"]) && isset($_GET["numbers2"]) && isset($_GET["numbers3"]) && isset($_GET["numbers4"]) && isset($_GET["numbers5"])) {
  $sum = $_GET["numbers1"]+$_GET["numbers2"]+$_GET["numbers3"]+$_GET["numbers4"]+$_GET["numbers5"];
  $avg = $sum/5;
  echo "Sum ",$sum,", avg ",$avg,"<br>";
} else {
  ?>
<form>
  Give me five numbers:
  Number 1:
  <input type="text" size=3 name="numbers1">
  Number 2:
  <input type="text" size=5 name="numbers2">
  Number 3:
  <input type="text" size=5 name="numbers3">
  Number 4:
  <input type="text" size=5 name="numbers4">
  Number 5:
  <input type="text" size=5 name="numbers5">
  <input type="submit" value="Ready">
  <br>
</form>
<?php
}
echo "<br>IWontCheatOnTheExams---------------------------------------------------------------------<br>";
for ($i=0; $i<100; $i++) {
  echo "I won't cheat on the exam! ";
}
echo "<br>PrintEven--------------------------------------------------------------------------------<br>";
for ($i=0; $i<501; $i++) {
  if ($i%2==0) {
    echo $i," ";
  }
}
echo "<br>MultiplicationTable----------------------------------------------------------------------<br>";
if(isset($_GET["multinumber"])) {
  $multinumber=$_GET["multinumber"];
  for ($i=0; $i<10; $i++) {
    echo ($i+1),"*",($multinumber),"=",(($i+1)*$multinumber),"<br>";
  }
} else {
?>
<form>
  Your number is:
  <input type="text" name="multinumber">
  <input type="submit" value="Ready">
</form>
<?php
}
echo "<br>CountFromTo------------------------------------------------------------------------------<br>";
if(isset($_GET["countnumber1"]) && isset($_GET["countnumber2"])) {
  $countnumber1=$_GET["countnumber1"];
  $countnumber2=$_GET["countnumber2"];
  if ($countnumber2>$countnumber1) {
  for ($i=$countnumber1; $i<$countnumber2; $i++) {
    echo $i," ";
  } } else {
    echo "The second number should be bigger<br>";
  }
} else {
?>
<form>
  Your number is:
  <input type="text" name="countnumber1">
  <input type="text" name="countnumber2">
  <input type="submit" value="Ready">
</form>
<?php
}
echo "<br>FizzBuzz---------------------------------------------------------------------------------<br>";
?>