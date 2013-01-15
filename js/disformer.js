(function($){

  Drupal.behaviors.disformer = {
    attach: function(context, settings) {
      $.each(settings.disformer, function(selector, options){
        $(selector, context)
          .once('disformer')
          .disformer(options);
      });
    }
  };

})(jQuery);

/**
 * jQuery Double Form Submit Preventer Plugin by M. Pezzi
 * Version: 1.0-alpha (08/23/12)
 * Dual licensed under the MIT and GPL licences:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 * Requires: jQuery v1.4.2 or later
 */
;(function($){

$.fn.disformer = function(options) {
  return this.each(function(){
    var self = $(this), o = $.extend({}, $.fn.disformer.defaults, options),

        // Elements.
        $form = self.parents('form');

    $form.submit(function(){
      $form
        .css('position', 'relative')
        .wrapInner('<div class="disformer-wrapper" />')
        .find('.disformer-wrapper')
          .delay(o.delay)
          .animate({ opacity: o.opacity }, function(){
            $('<div class="disformer-loader">').hide().appendTo($form)
              .html(o.text)
              .css({
                position: 'absolute',
                top: '50%',
                width: $form.width() + 'px',
                textAlign: 'center'
              })
              .fadeIn();
          });

      // Disable the submit button.
      self.attr('disabled', true);

      return !o.debug;
    });

    return this;
  });
};

$.fn.disformer.defaults = {
  debug: false,
  delay: 1000,
  opacity: 0.5,
  text: 'Sending ...'
};

})(jQuery);