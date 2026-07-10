let count=document.getElementById("count");
let increase=document.getElementById("increase");
let decrease=document.getElementById("decrease");
let reset=document.getElementById("reset");
let clearStorage=document.getElementById("clearStorage");
let container=document.querySelector(".container");

let value=0;
let savedValue=localStorage.getItem("count");
if(savedValue!=null){
    value=Number(savedValue);
}
updateCounter();
function updateCounter(){
    count.innerText=value;
    localStorage.setItem("count",value);
    if(value>0){
        count.style.color="green";
        container.style.borderColor="green";
    }
    else if(value<0){
        count.style.color="red";
        container.style.borderColor="red";
    }
    else{
        count.style.color="black";
        container.style.borderColor="black";
    }
}

increase.addEventListener("click",function(){
    value++;
    updateCounter();
});
decrease.addEventListener("click",function(){
    value--;
    updateCounter();
});
reset.addEventListener("click",function(){
    value=0;
    updateCounter();
})
clearStorage.addEventListener("click",function(){
    localStorage.removeItem("count");
    value=0;
    updateCounter();
})