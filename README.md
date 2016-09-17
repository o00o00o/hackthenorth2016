# hackthenorth2016
Interface for non-profits to access reliable data regarding geographical region 

Issue: Non-profits needs a easy access to reliable data. This would be use to target select demographics, provide much needed services, and optomize resource allocation. 

The BIG idea: This project is a proof of concept for increasing hands-on tech opprunities for students and increasing the impact that a non-profits can make. Summer interns with the support of Canadian Goverment Summer Student grant with no prior SQL experience can successfully parse the raw data and turn it into a Query-able database. From here the non-profit can use the data to model predictions and to create targeting stragizies. While the student interner recives valuable job experience that is not making coffee. 

Solve: Non-profits needs data and the goverment of Canada provides data from Statics Canada that is open for the public to use. The only issue is that these data are extremely overwhelming, unorgazined, and raw. Having interns or an open-source community where we can make these data usable for the general public espcially non-profits. 

Learn: This is the first time I have worked with SQL databases. I was able to to create an encompassing project where I installed/created a database and created a interface to access such database. The hardest part of the project is working with the volume of data. I needed to use tricks such as replace all and wildcard matching to be able to process the data and then insert into the data base. 

This project uses this data set http://open.canada.ca/data/en/dataset/93d89f25-2770-4030-814f-771fea2af2a4 "Neighbourhood income and demographics, taxfilers and dependents, by sex, marital status and age group" which includes 203,902 data points. This data was parsed into a sqlite database seperating each catagory to be easily queried. Then a fast C++ interface was implmented to allow anyone such as the marketing manager to find releveant infomation. 

The goal of this project was to have a system where non-profits can target select regions based on a varity of indicators. Such as income median, age median, age/sex breakdown. Due to a lack of time only a subset of these features were implmented. 

