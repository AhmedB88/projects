function mainToDescription(){
    const main = document.getElementById("main");
    const description = document.getElementById("description");
    main.classList.add("hidden-form");
    description.classList.remove("hidden-form");

}
function descriptionToMain (){
    const main = document.getElementById("main");
    const description = document.getElementById("description");
    main.classList.remove("hidden-form");
    description.classList.add("hidden-form");
}
function descriptionToChoosing(){
    const description = document.getElementById("description");
    const ChoosingSection = document.getElementById("choosing-section");
    description.classList.add("hidden-form");
    ChoosingSection.classList.remove("hidden-form")
}
function choosingTodescription(){
    const description = document.getElementById("description");
    const ChoosingSection = document.getElementById("choosing-section");
    ChoosingSection.classList.add("hidden-form");
    description.classList.remove("hidden-form");

}
function moreAboutMe(){
    mainToDescription();
}
function previousButton (){
    descriptionToMain();
}
function nextButton(){
    descriptionToChoosing();
}

function previousButtonEnd(){
    choosingTodescription();
}