SELECT patient_id, patient_name, conditions
FROM Patients
WHERE LEFT(conditions, 5) = 'DIAB1'
   OR conditions LIKE '% DIAB1%';