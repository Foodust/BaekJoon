-- 코드를 입력하세요
select distinct(animal_type) , count(*) from ANIMAL_INS where animal_type = 'Cat' or animal_type = 'Dog' group by animal_type order by animal_type;