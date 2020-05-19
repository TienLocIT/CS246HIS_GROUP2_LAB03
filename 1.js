$(document).ready(function () {
   $('.nutcl').click(function (e) { 
       e.preventDefault();
       console.log("dcm");
       $('.videoss').addClass('hienvideo');
   });
   $('.nuttat').click(function (e) { 
       e.preventDefault();
       console.log("allala");
       $('.videoss').removeClass('hienvideo');
   });
});