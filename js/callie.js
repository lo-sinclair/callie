/**
 * @file
 * This is main script of Callie. His route other js files.
 */
(function ($) {
Drupal.behaviors.callie = {
  attach: function (context, settings) {

    



    $('body').once('callie', function(){
        //jQuery(this).append('<h1>OOOOoooo!</h1>');
    });


    

  }
};
})(jQuery);