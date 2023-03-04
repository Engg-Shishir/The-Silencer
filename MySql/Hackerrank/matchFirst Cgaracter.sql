/*
    Problem Name : weather-observation-station-6
    Source       : https://www.hackerrank.com/challenges/weather-observation-station-6/
    Author       : Shishir Bhuiyan
    Hackerrank   : The-Silencer
    Date         : 03/March/2023
*/
/*
    Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.
*/

SELECT DISTINCT CITY from STATION WHERE RIGHT(city, 1) in ('a', 'e', 'i', 'o', 'u');

/*
  DISTINCT : DISTINCT statement is used to return only different values. It remove duplicate value 
  
  LEFT(source,size) : The LEFT() function extracts a number of characters from a string (starting from left).
*/



