/*Query all columns for all American cities in the CITY table with populations larger than 100000. The CountryCode for America is USA. */
select * from CITY
    where POPULATION > 100000 AND COUNTRYCODE = 'USA';
