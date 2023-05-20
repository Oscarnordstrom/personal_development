This would mean that    

`string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";`

would evaluate as

`string finalgrade = ((grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75)) ? "low pass" : "pass";`

which has the consequence that if the grade is larger than 90, it would return "low pass", since the expression to the left of the final question mark returns 
a non empty string, which always evaluates as true.