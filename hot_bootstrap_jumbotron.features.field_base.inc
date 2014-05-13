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

  // Exported field_base: 'field_hot_bs_jumbotron_caption'
  $field_bases['field_hot_bs_jumbotron_caption'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hot_bs_jumbotron_caption',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
