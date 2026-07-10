let input=document.getElementById("taskInput");
let addBtn=document.getElementById("addBtn");
let taskList=document.getElementById("taskList");
let tasks=[];

addBtn.addEventListener("click",function(){
    if(input.value===""){
        alert("please enter a task");
        return;
    }
    let li=document.createElement("li");
    li.innerText=input.value;
    taskList.append(li);
    input.value="";
});