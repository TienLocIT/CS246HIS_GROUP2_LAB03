$(function () {
    //lay phan tu con thu 1 cua lop
    $('.menutop ul li:nth-child(1) a').click(function (e) { 
        e.preventDefault();
        // console.log('da click');
        $('html,body').animate({scrollTop:$('.phan1').offset().top-50}, 1000);
        // console.log($('.phan1').offset().top);
    });
    $('.menutop ul li:nth-child(2) a').click(function (e) { 
        e.preventDefault();
        // console.log('da click');
        $('html,body').animate({scrollTop:$('.phan2').offset().top-50}, 1000);
        // console.log($('.phan1').offset().top);
    });
    $('.menutop ul li:nth-child(3) a').click(function (e) { 
        e.preventDefault();
        // console.log('da click');
        $('html,body').animate({scrollTop:$('.phan3').offset().top-50}, 1000);
        // console.log($('.phan1').offset().top);
    });
    $('.menutop ul li:nth-child(4) a').click(function (e) { 
        e.preventDefault();
        // console.log('da click');
        $('html,body').animate({scrollTop:$('.phan4').offset().top-50}, 1000);
        // console.log($('.phan1').offset().top);
    });
    $('.nuttop').click(function (e) { 
        e.preventDefault();
        $('html,body').animate({scrollTop:0},1500);
    });
    $(window).scroll(function () { 
        if($(this).scrollTop()>100){
            $('.nuttop').addClass('hientop');
        }
        else{
            $('.nuttop').removeClass('hientop');
        }
    });
});