let images = ["https://m.media-amazon.com/images/I/61Jr-rvLUDL._UF1000,1000_QL80_.jpg"]


document = notes.html
function hello(){
    let name = window.prompt("what is your JM rank")
    document.getElementById("title").innerHTML = "hello " + name + "!"
}
count = 0
function change(){
    
    document.getElementById("fn").src = images [count]
    if(count === 2){
        count = 0
    }else{
        count+=1
    }
}

function highlight(){
    document.getElementById("Btn").style.backgroundColor = "orange"
    document.getElementById("Btn").style.backgroundColor = "white"
}
function normal(){
     document.getElementById("Btn").style.backgroundColor = "gray"
    document.getElementById("Btn").style.backgroundColor = "black"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}
function pop(){
    window.alert("DONT CLICK IT RETARD")
}