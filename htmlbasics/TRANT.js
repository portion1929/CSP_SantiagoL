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
function show(){
    document.getElementById("CONTROVERSY").style.display ="block"
    if(document.getElementById("CONTROVERSY").style.display ="block"){
       
    }
} 
function show(){
    if(document.getElementById("CONTROVERSY").style.display != "flex")
        {document.getElementById("CONTROVERSY").style.display = "flex"
    document.getElementById("CONTROVERSY").innerHTML = "Tyler, The Creator was known around 2009-2011 for his dark and disturbing lyrics (found in songs like Yonkers, VCR/Wheels, Analog, Tron Cat, She, BSD and more) Which even got him banned from places like Britain for his lyrics. His album Wolf from 2013 did not have as many controversal lyrics and was praised even more than his first 2 albums, but did have some lyrics that some would call odd. (Tamale, Domo23, Colossus, Bimmer) Some of Tyler's old songs were made depicting accidents like Pigs, which is a direct reference to the Columbine shooting back in 1999 and Colossus is the story of a fan meeting Tyler at Six Flags and making him very uncomfortable while trying to get on the Colossus ride."
    document.getElementById("CON").innerHTML = "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTmyAVocU-Pz_ylUAlrg6NWfJyOkDIT0aNCFQ&s"
    }else{
        document.getElementById("CONTROVERSY").style.display = "none"
    document.getElementById("CONTROVERSY").innerHTML = "show more"
    }
}