<?php
/**
 * @file
 * custom_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function custom_content_types_node_info() {
  $items = array(
    'del' => array(
      'name' => t('DEL'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Use the Event content type to store CCE events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'local_offices' => array(
      'name' => t('Local Offices'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'local_programs' => array(
      'name' => t('Local Programs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use the News content type for CCE news items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pwt' => array(
      'name' => t('PWT'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
