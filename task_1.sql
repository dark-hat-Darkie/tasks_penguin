SELECT courses.name, teachers.name FROM courses JOIN teachers;
SELECT DISTINCT teachers.name, COUNT(teacher_id) AS 'Course Count' FROM courses JOIN teachers ON courses.teacher_id = teachers.id GROUP BY teachers.name ORDER BY COUNT(teacher_id) DESC;
SELECT teachers.name from teachers LEFT JOIN courses ON teachers.id = courses.teacher_id WHERE teacher_id IS NULL;
