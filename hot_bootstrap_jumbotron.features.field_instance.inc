<?php
/**
 * @file
 * hot_bootstrap_jumbotron.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_bootstrap_jumbotron_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_button'
  $field_instances['fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_button'] = array(
    'bundle' => 'hot_bootstrap_jumbotron',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optional bootstrap button here, maybe try <code>.btn-prmary</code> &  <code>.btn-large</code>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_button',
    'label' => 'Button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_caption'
  $field_instances['fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_caption'] = array(
    'bundle' => 'hot_bootstrap_jumbotron',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Heads Up!</strong>
Keep this text short, see what a jumbtron looks like on the <a href="http://getbootstrap.com/components/#jumbotron">boostrap docs for jumbotrons</a>
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_bootstrap_jumbotron_caption',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Heads Up!</strong>
Keep this text short, see what a jumbtron looks like on the <a href="http://getbootstrap.com/components/#jumbotron">boostrap docs for jumbotrons</a>
');
  t('Button');
  t('Caption');
  t('Optional bootstrap button here, maybe try <code>.btn-prmary</code> &  <code>.btn-large</code>');

  return $field_instances;
}
