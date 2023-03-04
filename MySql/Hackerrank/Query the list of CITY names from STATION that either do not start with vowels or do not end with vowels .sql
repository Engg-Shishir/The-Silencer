/*
    Problem Name : weather-observation-station-11
    Source       : https://www.hackerrank.com/challenges/weather-observation-station-11
    Author       : Shishir Bhuiyan
    Hackerrank   : engg_shishir
    Date         : 03/March/2023
*/
/*
   Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels. Your result cannot contain duplicates.
*/

select distinct city from station where city regexp '^[^aeiou]|[^aeiou]$';

/*

######## MySQL Regular Expressions (Regexp): ######## 
A Regular Expression is popularly known as RegEx, is a generalized expression that is used to match patterns with various sequences of characters. A RegEx can be a combination of different data types such as integer, special characters, Strings, images, etc. Generally, these patterns are used in String searching algorithms in order to perform find or find and replace operations on Strings, or for validating the input.

*	       Matches zero or more instances of the preceding String
+	       Matches one or more instances of the preceding String
.	       Matches any single character
?	       Matches zero or one instance of the preceding Strings
^	       matches the beginning of a String
$	       matches the ending of a String
[abc]	   Matches any character listed in between the square brackets
[^abc]	   Matches any character not listed in between the square brackets
[A-Z]	   Matches any letter in uppercase
[a-z]	   Matches any letter in lowercase
[0-9]	   Matches any digit between 0-9
[[:<:]]	   Matches the beginning of words
[[:>:]]	   Matches the end of words
[:class:]  Matches any character class
p1|p2|p3   Mathes any of the specified pattern
{n}	       Matches n instances of the preceding element
{m,n}	   Matches m through n instances of the preceding element


^Hello$    = the word Hello and nothing more
^Hello.*   = something that starts with Hello
[^0-9]     = anything that is not a digit
[^a-zA-Z]  = anything that is not an english letter  


*/