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

  // Exported field_instance: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_image_image'
  $field_instances['fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_image_image'] = array(
    'bundle' => 'hot_bootstrap_jumbotron',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_basic_image_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'images/kala-cta/',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'allowed_types' => array(
          0 => 'image',
        ),
        'browser_plugins' => array(),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_text_text'
  $field_instances['fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_text_text'] = array(
    'bundle' => 'hot_bootstrap_jumbotron',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_minimal',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_basic_text_text',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_style'
  $field_instances['fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_style'] = array(
    'bundle' => 'hot_bootstrap_jumbotron',
    'default_value' => array(
      0 => array(
        'value' => 'kala-cta-card-brand',
      ),
    ),
    'deleted' => 0,
    'description' => '<p class="help-block">
  <ul class="list-inline">
    <li><strong>Card Style</strong> will give you a solid block of color that is set to the <span>Brand Color</span> in <a href="http://getbootstrap.com">TW Bootstrap</a></li>
    <li><strong>Overlay</strong> will position the caption over the whole image and center the text. </li>
    <li><strong>Caption Right</strong> will position the caption to the right on larger screens, then overlay on smaller sizes. </li>
    <li><strong>Caption Left</strong> will position the caption to the left on larger screens, then overlay on smaller sizes. </li>
  </ul>
</p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_bootstrap_jumbotron_style',
    'label' => 'Style',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_url'
  $field_instances['fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_url'] = array(
    'bundle' => 'hot_bootstrap_jumbotron',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p class="help-block">
Call to action url is optional, but when provided will wrap the whole pane content in an link that will make the link clickable.
</p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_bootstrap_jumbotron_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 1,
        'insert_plugin' => 'raw_url',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p class="help-block">
  <ul class="list-inline">
    <li><strong>Card Style</strong> will give you a solid block of color that is set to the <span>Brand Color</span> in <a href="http://getbootstrap.com">TW Bootstrap</a></li>
    <li><strong>Overlay</strong> will position the caption over the whole image and center the text. </li>
    <li><strong>Caption Right</strong> will position the caption to the right on larger screens, then overlay on smaller sizes. </li>
    <li><strong>Caption Left</strong> will position the caption to the left on larger screens, then overlay on smaller sizes. </li>
  </ul>
</p>');
  t('<p class="help-block">
Call to action url is optional, but when provided will wrap the whole pane content in an link that will make the link clickable.
</p>');
  t('Caption');
  t('Image');
  t('Style');
  t('URL');

  return $field_instances;
}
