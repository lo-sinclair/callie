/**
 * @file
 * This is main script of Callie. His route other js files.
 */
(function ($) {
Drupal.behaviors.callie = {
  attach: function (context, settings) {

    

  	

    $('body').once('callie', function(){
    	var callie_forms = Drupal.settings.callie_forms;

    
    	$(".callie-form-open").each(function(){
			 
    	});

    	
    	console.log(callie_forms['callie-form-1'].mode);
    	for (id in callie_forms ) {
    			if ($(".callie-form-open[form-id=callie-form]").length > 0) {

    		}
			
    	}



        //jQuery(this).append('<h1>OOOOoooo!</h1>');
    });
	

    jQuery.get("/form-get", function(data) {
	
	
}); 

  }
};
})(jQuery);