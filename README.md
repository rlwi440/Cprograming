 # Daily  1commit exercise start
--------------------------------------------------------------
``````java
Example reviewed 
document.wirte("<img src=\"images/math_img_"+com+.jpg/">")
if (game NUM ==com){            //game Num과 com 이 일치 여부 검사
    document.write("<img src=\"images\game_1.jpg\">")
}else{
    document.write("<img src=\"images\game_2.jpg\">")
}
`````````
-------------------------------------------------------------
## example statement array method 
```````
var d= new Array();  //기본형 배열 객체
sort() 오름차순
join(연결문자)  배열객체의 데이터를 연결 문자 기준으로 1개로 문자형데이터 로 반환
shift() 배열객체에 저장된 데이터중 첫번째 인덱스에 저장된 데이터를 삭제
unshift() 배열객체 의 가장 앞의 인덱스에 새 데이터를 삽입합니다.
length  ex) for (i=0; i<arr.length;i++)
pop() 배열에 저장된 데이터중 마지막 인덱스에 저장된 데이터를 삭제
````````
-------------------------------------------------------------

------------------------------------------------------------
## example statement string method
 ```````
 var t ="hello javascript";    //기본형 문자열 객체
    
 split("문자") ex) var str ="stringmethod1234"
                    var arr =str.split(g) ; arr = strin(0),method(1),1234(2)
 search("찾을문자")  문자열 에서 왼쪽부터 찾을문자와 일치하는 문자를 찾아 제일먼저 일치하는 인덱스 번호를 반환합니다.
                    ex)var str ="stringmethod1234" ("ing") (4)를 반환함.

 indexOF ("찾을문자")    일치하는 문자를 찾아 제일먼저 일치하는 문자의 인덱스 번호를반환합니다.
                        ex) str.indxOF("HE");
 substring(a,b) a 인덱스부터 b 인덱스 이전 구간의 문자를 반환합니다.
                ex)var str="hello javascript" str.substring(3,7);   --> "lo j"를 반환함
``````` 
--------------------------------------------------------------

--------------------------------------------------------------
## example statement windows method
````````
open("URL","새 창이름","새 창옵션") //기본형 Open()메서드 
prompt("질문","답변")   질문과 답변으로 질의응답 창을 나타냅니다.
confirm("질문 내용")    질문 내용으로 확인이나 취소창을 나타냅니다. [확인] 버튼 누르면 true 를 반환하고,[취소] 버튼을 누르면 false를 반환합니다.
setInterval(function(){자바스크립 코드},일정시간간격)   지속적으로 일정한 시간 간격으로 함수를 호출하여 코드를 실행
setTimeout(function(){자바스크립 코드},일정시간간격)    단 한번 일정시간 간격으로 함수를호출하여 코드를 실행
`````````
---------------------------------------------------------------

----------------------------------------------------------------
``````
## example use of object consructor function
 function 함수명 (매개변수1, 매개변수2,...매개변수n){
     this.속성명 =새값;
     this.함수명 =function(){
         자바스크립트 코드;
     }
 }

    var 참조변수(인스턴스 네임)= new 함수명();
                    
    var 참조변수 ={속성: 새값,함수명:function(){....}}
``````
------------------------------------------------------------------
