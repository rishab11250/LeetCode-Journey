-- Last updated: 3/6/2026, 12:40:22 AM
select teacher_id, COUNT(DISTINCT subject_id ) as cnt from Teacher group by teacher_id