use greeshma_db;

insert into persons(name, gender, location)
values('greeshma', 'f', 'mysuru');
insert into persons(name, location) values('nikhil', 'hassan');

insert into persons(name) values('jo');

insert into persons(name, gender) values('lia', 'f');
select * from persons;