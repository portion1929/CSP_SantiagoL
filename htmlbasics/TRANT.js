document = TYLER_RANT.html

let images = ["https://m.media-amazon.com/images/I/61Jr-rvLUDL._UF1000,1000_QL80_.jpg"]
count = 0
function change(){
    
    document.getElementById("pineapple").src = images [count]
    if(count === 1){
        count = 0
    }else{
        count+=1
    }
}