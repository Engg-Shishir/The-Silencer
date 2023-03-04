/*
    Problem Name : weather-observation-station-10
    Source       : https://www.hackerrank.com/challenges/weather-observation-station-10
    Author       : Shishir Bhuiyan
    Hackerrank   : engg_shishir
    Date         : 03/March/2023
*/
/*
   Query the list of CITY names from STATION that do not end with vowels. Your result cannot contain duplicates.
*/

SELECT DISTINCT CITY FROM STATION WHERE NOT RIGHT(CITY,1) IN ('A','E','I','O','U');