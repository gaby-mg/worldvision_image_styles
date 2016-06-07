<?php
/**
 * @file
 * worldvision_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function worldvision_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: centered_medium.
  $styles['centered_medium'] = array(
    'label' => 'centered_medium',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 245,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 180,
          'height' => 126,
          'anchor' => 'center-center',
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: child_search.
  $styles['child_search'] = array(
    'label' => 'child_search',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 109,
          'height' => 147,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: child_search_big.
  $styles['child_search_big'] = array(
    'label' => 'child_search_big',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 207,
          'height' => 278,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: child_sponsorship_child_img.
  $styles['child_sponsorship_child_img'] = array(
    'label' => 'child_sponsorship_child_img',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 333,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: child_sponsorship_img.
  $styles['child_sponsorship_img'] = array(
    'label' => 'child_sponsorship_img',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: donation_main.
  $styles['donation_main'] = array(
    'label' => 'donation_main',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 514,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 514,
          'height' => 318,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: donation_step.
  $styles['donation_step'] = array(
    'label' => 'donation_step',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 235,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: donation_thanks.
  $styles['donation_thanks'] = array(
    'label' => 'donation_thanks',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 327,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: frontpage_featured.
  $styles['frontpage_featured'] = array(
    'label' => 'frontpage_featured',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 723,
          'height' => 363,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_width_2cols.
  $styles['full_width_2cols'] = array(
    'label' => 'full_width_2cols',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 245,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large_vertical.
  $styles['large_vertical'] = array(
    'label' => 'Large_vertical',
    'effects' => array(
      51 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_big.
  $styles['logo_big'] = array(
    'label' => 'logo_big',
    'effects' => array(
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 580,
          'height' => 290,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logos.
  $styles['logos'] = array(
    'label' => 'logos',
    'effects' => array(
      29 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 147,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: lospadrinos_home.
  $styles['lospadrinos_home'] = array(
    'label' => 'lospadrinos_home',
    'effects' => array(
      36 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 815,
          'height' => 415,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: lospadrinos_product.
  $styles['lospadrinos_product'] = array(
    'label' => 'lospadrinos_product',
    'effects' => array(
      41 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: lospadrinos_product_square.
  $styles['lospadrinos_product_square'] = array(
    'label' => 'lospadrinos_product_square',
    'effects' => array(
      46 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mysponsorship.
  $styles['mysponsorship'] = array(
    'label' => 'mysponsorship',
    'effects' => array(
      32 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 228,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      33 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 305,
          'height' => 228,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: news_category.
  $styles['news_category'] = array(
    'label' => 'news_category',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 126,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_related.
  $styles['news_related'] = array(
    'label' => 'news_related',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 159,
          'height' => 112,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: padrino.
  $styles['padrino'] = array(
    'label' => 'padrino',
    'effects' => array(
      61 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_map.
  $styles['project_map'] = array(
    'label' => 'project_map',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 132,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: regalo_solidario_front.
  $styles['regalo_solidario_front'] = array(
    'label' => 'regalo_solidario_front',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 245,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: solidarity_birthday.
  $styles['solidarity_birthday'] = array(
    'label' => 'solidarity_birthday',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 148,
          'height' => 197,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: solidarity_gift_card.
  $styles['solidarity_gift_card'] = array(
    'label' => 'solidarity_gift_card',
    'effects' => array(
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: solidarity_gift_product.
  $styles['solidarity_gift_product'] = array(
    'label' => 'solidarity_gift_product',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 418,
          'height' => 418,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sp_child_img.
  $styles['sp_child_img'] = array(
    'label' => 'sp_child_img',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 222,
          'height' => 296,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sp_thx_child_img.
  $styles['sp_thx_child_img'] = array(
    'label' => 'sp_thx_child_img',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 162,
          'height' => 151,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail78.
  $styles['square_thumbnail78'] = array(
    'label' => 'square_thumbnail78',
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 78,
          'height' => 78,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail96.
  $styles['square_thumbnail96'] = array(
    'label' => 'square_thumbnail96',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 96,
          'height' => 96,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: staff.
  $styles['staff'] = array(
    'label' => 'staff',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: stopablacion_gallery.
  $styles['stopablacion_gallery'] = array(
    'label' => 'stopablacion_gallery',
    'effects' => array(
      56 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 746,
          'height' => 386,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
