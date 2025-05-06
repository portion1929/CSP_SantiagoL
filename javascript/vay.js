document.vayctaion.html

let image = ["https://www.stgeorgeutahvacationrentals.com/media/654141a79e1a1eee2ee65b49/xlarge.webp","https://www.thespectrum.com/gcdn/presto/2022/02/05/PSTG/d8d7309c-96ed-466a-8fce-e44c19714c37-STG_0205_Sand_Hollow_Skyfest_85.jpg"]

function show(){
    if(document.getElementById("hist").style.display != "flex")
        {document.getElementById("hist").style.display = "flex"
    document.getElementById("hist").innerHTML = "Sand Hollow Reservoir, completed in March 2002, is a key water resource for Washington County, Utah, and a popular recreation destination. It was built primarily for managed aquifer recharge, a system where surface water is diverted into an underground aquifer for later retrieval. The reservoir also provides significant recreational opportunities, making Sand Hollow State Park one of Utah's most visited destinations."
        document.getElementById("hidden").style.display = "block"
}else{
        document.getElementById("hist").style.display = "none"
    document.getElementById("hist").innerHTML = "show more"
        document.getElementById("hidden").style.display = "none"
    }
}

count = 0
function change(){
    document.getElementById("fixit").src=image[count]
    if(count === 1){
        count = 0
    }else{
        count +=1
    }
}
