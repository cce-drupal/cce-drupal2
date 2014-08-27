<?php
/**
 * @file
 * views_view.hero_slideshow.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'hero_slideshow';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Hero Slideshow';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
$handler->display->display_options['style_options']['slideshow_skin'] = 'default';
$handler->display->display_options['style_options']['skin_info'] = array(
  'class' => 'default',
  'name' => 'Default',
  'module' => 'views_slideshow',
  'path' => '',
  'stylesheets' => array(),
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'field_hero_graphic' => 0,
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'field_hero_graphic' => 0,
);
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
$handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '2000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Hero Graphic */
$handler->display->display_options['fields']['field_hero_graphic']['id'] = 'field_hero_graphic';
$handler->display->display_options['fields']['field_hero_graphic']['table'] = 'field_data_field_hero_graphic';
$handler->display->display_options['fields']['field_hero_graphic']['field'] = 'field_hero_graphic';
$handler->display->display_options['fields']['field_hero_graphic']['label'] = '';
$handler->display->display_options['fields']['field_hero_graphic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_hero_graphic']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_hero_graphic']['settings'] = array(
  'image_style' => 'hero_graphic',
  'image_link' => 'content',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'hero_slide' => 'hero_slide',
);

/* Display: Hero Slideshow Block */
$handler = $view->new_display('block', 'Hero Slideshow Block', 'block');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
);
