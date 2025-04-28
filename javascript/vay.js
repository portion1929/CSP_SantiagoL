document.vayctaion.html
function show(){
    if(document.getElementById("CONTROVERSY").style.display != "flex")
        {document.getElementById("CONTROVERSY").style.display = "flex"
    document.getElementById("CONTROVERSY").innerHTML = "Sand Hollow Reservoir, completed in March 2002, is a key water resource for Washington County, Utah, and a popular recreation destination. It was built primarily for managed aquifer recharge, a system where surface water is diverted into an underground aquifer for later retrieval. The reservoir also provides significant recreational opportunities, making Sand Hollow State Park one of Utah's most visited destinations."
    }else{
        document.getElementById("CONTROVERSY").style.display = "none"
    document.getElementById("CONTROVERSY").innerHTML = "show more"
    }
}