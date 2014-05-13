<?php
/**
 * @file
 * hot_bootstrap_jumbotron.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hot_bootstrap_jumbotron_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hot_bootstrap_jumbotron_style'
  $field_bases['field_hot_bootstrap_jumbotron_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hot_bootstrap_jumbotron_style',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'kala-cta-card-brand' => ' Card Style <small><em>Image optional variation</em></small>',
        'kala-cta-overlay' => ' Overlay',
        'kala-cta-caption-right' => ' Caption Right',
        'kala-cta-caption-left' => ' Caption Left'
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_hot_bootstrap_jumbotron_url'
  $field_bases['field_hot_bootstrap_jumbotron_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hot_bootstrap_jumbotron_url',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
