/*
    Problem Name : weather-observation-station-8
    Source       : https://www.hackerrank.com/challenges/weather-observation-station-8
    Author       : Shishir Bhuiyan
    Hackerrank   : engg_shishir
    Date         : 03/March/2023
*/
/*
        Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) as both their first and last characters. Your result cannot contain duplicates.
*/

SELECT DISTINCT CITY FROM STATION WHERE RIGHT(CITY,1) IN ('a','e','i','o','u') AND LEFT(CITY,1) IN ('A','E','I','O','U');

/*
  DISTINCT : DISTINCT statement is used to return only different values. It remove duplicate value 
  
  LEFT(source,size) : The LEFT() function extracts a number of characters from a string (starting from left).
*/



