<?php
/**
 * @file panels-pane-fieldable-panels-pane--fieldable-kala-cta.tpl.php
 * kala Panel Template for Call to Action items
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 */
?>
<section class="jumbotron">

  <?php
   print render($elements['title']);
   print render($elements['field_hot_jumbotron_caption']);
   if(isset($elements['field_hot_button'])):
  ?>
  <p>
  <?php print render($elements['field_hot_button']); ?>
  </p>
  <?php endif; ?>

</section>
