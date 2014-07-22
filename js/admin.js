/**
 * @file
 * This is main script of Callie. His route other js files.
 */
(function ($) {
Drupal.behaviors.callie_admin = {
  attach: function (context, settings) {

    
  	$( ".callie-help-content" ).toggle();
  	$( ".callie-help-open" ).click(function() {
  		  $('.callie-help').has(this).find('.callie-help-content').toggle( "fast", function() {
		  });
		  return false;
	});

   
	



  }
};
})(jQuery);