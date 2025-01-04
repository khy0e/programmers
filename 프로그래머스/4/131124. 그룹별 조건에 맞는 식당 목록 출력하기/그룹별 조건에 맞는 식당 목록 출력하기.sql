-- 코드를 입력하세요
SELECT A.MEMBER_NAME, B.REVIEW_TEXT, DATE_FORMAT(B.REVIEW_DATE, '%Y-%m-%d') AS REVIEW_DATE
FROM MEMBER_PROFILE AS A
JOIN REST_REVIEW AS B ON A.MEMBER_ID = B.MEMBER_ID
WHERE B.MEMBER_ID = (
    SELECT C.MEMBER_ID
    FROM REST_REVIEW AS C
    GROUP BY C.MEMBER_ID
    ORDER BY COUNT(*) DESC
    LIMIT 1
)
ORDER BY B.REVIEW_DATE ASC;
                   
