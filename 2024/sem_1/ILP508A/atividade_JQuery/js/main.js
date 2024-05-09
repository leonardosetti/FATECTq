jQuery(document).ready(function($){
    $('#swapImageNext').on('click', function(){
      $('#swapImage1').attr('src','../img/orng.png');
      $('#text_1 .swapText').text('Tênis Nike Laranja estiloso');
    });

    $('#swapImageNext').on('click', function(){
      $('#swapImage2').attr('src','../img/pp_wht.png');
      $('#text_2 .swapText').text('Adiddas Branco e roxo');
    });

    $('#swapImageNext').on('click', function(){
      $('#swapImage3').attr('src','../img/red.png');
      $('#text_3 .swapText').text('Tenis Nike vermelhão');
    });

    $('#swapImageBack').on('click', function(){
        $('#swapImage1').attr('src','../img/red_bl.png');
        $('#text_1 .swapText').text('Tenis NewBalance Azul Vermelho e branco');
      });
  
      $('#swapImageBack').on('click', function(){
        $('#swapImage2').attr('src','../img/t_amarelop.png');
        $('#text_2 .swapText').text('Tenis Mizuno Amarelo');
      });
  
      $('#swapImageBack').on('click', function(){
        $('#swapImage3').attr('src','../img/t_branco_verm.png');
        $('#text_3 .swapText').text('TEnis Branco com detalhes vermelhos e azuis');
      });

      $('#swapImageReset').on('click', function(){
        $('#swapImage1').attr('src','../img/acqua.png');
        $('#text_1 .swapText').text('Tênis Nike Azul bem bonito');
      });
  
      $('#swapImageReset').on('click', function(){
        $('#swapImage2').attr('src','../img/gr_bl.png');
        $('#text_2 .swapText').text('Tênis Nike Azul Escuro');
      });
  
      $('#swapImageReset').on('click', function(){
        $('#swapImage3').attr('src','../img/green.png');
        $('#text_3 .swapText').text('Tênis Nike Azul Verde');
      });
  });