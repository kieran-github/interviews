#https://leetcode.com/problems/not-boring-movies/submissions/
SELECT * 
    FROM cinema
WHERE id%2!=0 
    AND
lower(description) not like '%boring%'
ORDER BY rating DESC;
