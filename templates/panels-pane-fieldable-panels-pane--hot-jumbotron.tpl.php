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
<?php if( isset( $content['field_hot_bootstrap_jumbotron_url'] ) ): ?>
<a href="<?php print  render( $content['field_hot_bootstrap_jumbotron_url'] ); ?>" class="kala-cta-link">
<?php endif; ?>
  <article class="<?php print $classes; ?>" <?php print $id; ?>>
    <figure class="pane-content">
      <?php
      if( isset( $content['field_basic_image_image'] ) ){
        print render( $content['field_basic_image_image'] );
      }
      ?>
      <figcaption class="kala-cta-caption">
        <?php
          if( isset( $content['title']  ) ){
            print render($content['title']);
          }
          if( isset( $content['field_basic_text_text'] ) ){
            print render(  $content['field_basic_text_text'] );
          }
        ?>
      </figcaption>
    </figure>
  </article>
<?php if( isset( $content['field_hot_bootstrap_jumbotron_url'] ) ): ?>
</a>
<?php endif; ?>
